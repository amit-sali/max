import { useState, useCallback, useEffect } from "react"
import './App.css'

function App() {

  const[length,setLength] = useState(8);
  const[numberAllowed,setNumberAllowrd] = useState(false);
  const[charAllow,setCharAllow] = useState(false);
  const[password,setPassword] = useState();

  const passGenerator = useCallback(()=>{
    let pass = ""
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

    if(numberAllowed){
      str += "0123456789"
    } 
    if(charAllow){
      str += "!@#$%^&*(){}[]~"
    } 

     for(let i =1;i<=length;i++){
      let char = Math.floor(Math.random()* str.length + 1)
      pass += str.charAt(char)
     }

     setPassword(pass)

  },[length,numberAllowed,charAllow,password,setPassword])

  useEffect(()=>{
    passGenerator()
  },[length, numberAllowed,charAllow,setPassword])

  return (
    <>
       <div className="w-full max-w-md mx-auto shadow-md rounded-lg px-4 py-3 my-8 bg-gray-800 text-orange-500">
      <h1 className='text-white text-center my-3'>Password generator</h1>
    <div className="flex shadow rounded-lg overflow-hidden mb-4">
        <input
            type="text"
            className="outline-none w-full py-1 px-3"
            placeholder={password}
            readOnly
            
        />
        <button className='outline-none bg-blue-700 text-white px-3 py-0.5 shrink-0'
        >copy</button>
        
    </div>
    <div className='flex text-sm gap-x-2'>
      <div className='flex items-center gap-x-1'>
        <input type="range"
         className='cursor-pointer'
         min={6}
         max={100}
         value={length}
         onChange={(e)=>{setLength(e.target.value)}}
    
         />
          <label>Length: {length} </label>
      </div>
      <div className="flex items-center gap-x-1">
      <input type="checkbox"/>
      <label htmlFor="numberInput">Numbers</label>
      </div>
      <div className="flex items-center gap-x-1">
      <input
          type="checkbox"
          defaultChecked={numberAllowed}
          id="numberInput"
          onChange={() => {
              setNumberAllowed((prev) => !prev);
          }}
      />
          <label htmlFor="characterInput">Characters</label>
      </div>
    </div>
</div>
    </>
  )
}

export default App
