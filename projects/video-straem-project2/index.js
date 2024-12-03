import express from "express"
import cors from "cors"
import multer from "multer"
import {v4 as uuidv4} from "uuid"

const app = express()

app.use(
    cors(
        {
            origin: ["http://localhost:3000","http://localhost:3000"],
            credentials : true
        }
    )
)

app.use((req,res,next)=>{
    
})

app.get('/',function(req,res){
    res.json({message:"hello chai aur code"})
})

app.listen(8000, function(){
    console.log("app is listening at port 3000...")
})







