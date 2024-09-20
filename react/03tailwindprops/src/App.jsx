import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

import Card from './components/Card'

function App() {
  return (
    <>
      <h1 className='bg-green-400 text-black p-4 rounded-xl'>tailwind test</h1>
      <br/>
      <Card username="amit" tagLine="first card"/>
      <br/>
      <Card username="max" tagLine="second card"/>
    </>
  )
}

export default App
