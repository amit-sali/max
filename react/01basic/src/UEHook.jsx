import { useState,useEffect } from "react";

 function UEHook (){

    const [counter,setCounter]=useState(0);
    const [data,setData] = useState('ram')
    const [ dummy , setDummy] = useState(false);

    useEffect(  ()=>{
 fetch('https://jsonplaceholder.typicode.com/posts').then((res) => {
    console.log("res is : " , res);
    
 }).catch((err) => {
    console.log("err is : " , err);
    
 })
    },[ dummy])


    function updateCount(){
        setCounter(counter+1)
    }
    function updateData(){
        setData("seeta")
    }
    return(
        <>
        <h2>useEffect in use</h2>

        <h2>counter value : {counter}</h2>
        <button onClick={updateCount} >press me to increment</button>
       
       <h2>data string : {data}</h2>
       <button onClick={updateData}>press me to change data string</button>
       
        <div>
            <button onClick={() => {
                setDummy (!dummy)
            }}>
                Get Data
            </button>
        </div>
        </>
    )
}

export default  UEHook ;