
const express = require('express')
const morgan = require('morgan')
const app = express()

app.use(morgan('dev'))          //third party middleware

app.use(express.json())         //in-built middleware
app.use(express.urlencoded({extended:true}))  

/*                             //custom middleware 
                               //can be coded for diff according to route
app.use((req, res, next) => {
     console.log('Request URL:', req.url);
     next(); // Pass control to the next middleware
   });
   
*/
  


app.set("view engine",'ejs')





app.get('/',(req,res)=>{
    res.render('index');
})

app.get('/about',(req,res)=>{
    res.send("about page");
})

app.get('/contact',(req,res)=>{
    res.send("conatact page");
})

app.post('/get-form-data',(req,res)=>{
    console.log(req.body)
    res.send("data received")
})

app.listen(3000)






















