import React from 'react'
import { useNavigate } from 'react-router-dom'

function About() {
  const navigate = useNavigate();
  function clickHandler(){
    navigate('/dashboard')
  }
  return (
    <div>
      About
      <br/>
      <button onClick={clickHandler}>GO TO Dashboard</button>
      </div>
  )
}

export default About