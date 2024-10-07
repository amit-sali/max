import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import './index.css'
import { RouterProvider } from 'react-router-dom'
import Home from './assets/components/Home/Home.jsx'
import Layout from './Layout.jsx'

const router = {
  path: '/',
  element: <Layout/>,
  children : [{
    path : "",
    element : <Home/>
  }]
}

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <RouterProvider router = {router}/>
  </StrictMode>,
)
