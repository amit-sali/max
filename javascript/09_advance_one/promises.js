// const promiseOne = new Promise(function(resolve,reject){
//     //do async task
//     //db calls
//     //cryptography related
//     setTimeout(function(){
//         console.log("async task complete 1");
//         resolve()
//     },1000)
// })

// promiseOne.then(function(){
//     console.log('promise consumed 1');
// })

// new Promise(function(resolve,reject){
//     setTimeout(function(){
//         console.log("async task 2")
//         resolve()
//     },1000)
// }).then(function(){
//     console.log("resolve functiom 2")
// })

// const promiseThree = new Promise(function(resolve,reject){
//     setTimeout(function(){
//     resolve({username:"max",email:"mit@123.com"})
//     },1000)
// })

// promiseThree.then(function(user){
//     console.log(user)
// })

// const promiseFour = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         let error = false;
//         if(!error){
//             resolve({username: "sam",email:"demo@gmail.com"})
//         } else{
//             reject("kahitareee chukla ERROR")
//         }
//     },1000)
// })

// promiseFour.then((user)=>{
//     console.log(user);
//     return user.username
// }).then((username)=>{
//     console.log(username);
// }).catch(function(error){
//     console.log(error);
// }).finally(()=> console.log("finally : promise is resolved or rejected"))



// const promiseFive = new Promise(function(resolve, reject){
//     setTimeout(function(){
//         let error = false;
//         if(!error){
//             resolve({username:"vikas", password:"12345"})
//         }else{
//             reject("error ala bhai")
//         }
//     },1000)
// })

// async function consumePromiseFive(){
//    try {
//     const respose = await promiseFive
//     console.log(respose);
    

//    } catch(error){
//         console.log(error);
        
//    }
// }
// consumePromiseFive()

// async function getAllUsers(){
//     try{
//     const response = await fetch('https://jsonplaceholder.typicode.com/users')
//     const data = await response.json()
//     console.log(data);}
//     catch(error){
//         console.log("error",error);   
//     }   
// }
// getAllUsers()

fetch('https://api.github.com/users/hiteshchoudhary')
.then((response)=>{
    return response.json()
}).then((data)=>{
    console.log(data)
})
.catch((error)=> console.log(error))