import express from "express"
import cors from "cors"
import multer from "multer"
import {v4 as uuidv4} from "uuid"

const app = express()

app.get('/',function(req,res){
    res.json({message:"hello chai aur code"})
})

app.listen(3000, function(){
    console.log("app is listening at port 3000...")
})







