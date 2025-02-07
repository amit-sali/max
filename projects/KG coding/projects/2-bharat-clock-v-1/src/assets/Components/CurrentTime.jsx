let CurrentTime = () =>{

    let time = new Date()
    return <p>
        this is the current date : {time.toDateString()} & time :{time.toLocaleTimeString()}
    </p>
}

export default CurrentTime;