const { log } = require('console')
const http = require('http')
                                                
const server = http.createServer((req,res)=>{
   if(req.url === "/about"){
      res.end("the about page")
   }
   if(req.url ==="/home"){
    res.end("home page")
   }
   if(req.url ==="/cat"){
    res.end("")
   }
})

server.listen(3000)



























