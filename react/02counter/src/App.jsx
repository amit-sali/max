import { useState } from 'react'
import './App.css'

function App() {

 const [counter,setCounter] = useState(15)
  
 const addValue = () =>{
    console.log("clicked add")
    setCounter(counter+1)
 }

 const descreaseValue = () =>{
    console.log("clicked minus")
    setCounter(counter-1)
 }

  return (
    <>
   <h1>chai aur react</h1>
   <h2>counter value : {counter}</h2>

   <button onClick={addValue}>add value</button>
   <br/>
   <br/>
   <button onClick={descreaseValue}>remove value</button>
    </>
  )
}

export default App
