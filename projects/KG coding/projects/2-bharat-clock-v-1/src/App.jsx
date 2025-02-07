import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
// import './App.css'
import ClockHeading from './assets/Components/ClockHeading'
import ClockSlogan from './assets/Components/ClockSlogan'
import CurrentTime from './assets/Components/CurrentTime'
import 'bootstrap/dist/css/bootstrap.min.css'

function App() {
 

  return (
    <>
    <center>
    <ClockHeading/>
    <ClockSlogan/>
    <CurrentTime/>
    </center>
     
    </>
  )
}

export default App
