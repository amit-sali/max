import React, { useState, useEffect } from 'react';
import { ChevronRight } from 'lucide-react';

const sections = {
  about: "Hi, I'm John Doe. I'm a full-stack developer with 5 years of experience.",
  skills: "JavaScript, React, Node.js, Python, SQL, MongoDB",
  projects: "1. E-commerce platform\n2. Weather app\n3. Task management system",
  contact: "Email: john@example.com\nGitHub: github.com/johndoe\nLinkedIn: linkedin.com/in/johndoe",
};

export default function TerminalPortfolio() {
  const [content, setContent] = useState('');
  const [showCursor, setShowCursor] = useState(true);

  useEffect(() => {
    const cursorInterval = setInterval(() => {
      setShowCursor(prev => !prev);
    }, 500);

    return () => clearInterval(cursorInterval);
  }, []);

  const typeContent = (text) => {
    let i = 0;
    const typing = setInterval(() => {
      if (i < text.length) {
        setContent(prev => prev + text.charAt(i));
        i++;
      } else {
        clearInterval(typing);
      }
    }, 20);
  };

  const handleCommand = (command) => {
    setContent('');
    if (sections[command]) {
      typeContent(sections[command]);
    } else {
      typeContent("Command not recognized. Try 'about', 'skills', 'projects', or 'contact'.");
    }
  };

  return (
    <>
    <div className="min-h-screen bg-gray-900 text-green-500 p-4 font-mono">
      <div className="max-w-2xl mx-auto bg-gray-800 rounded-lg overflow-hidden shadow-lg">
        <div className="bg-gray-700 px-4 py-2 flex items-center space-x-2">
          <div className="w-3 h-3 rounded-full bg-red-500"></div>
          <div className="w-3 h-3 rounded-full bg-yellow-500"></div>
          <div className="w-3 h-3 rounded-full bg-green-500"></div>
          <span className="ml-2 text-sm text-gray-300">portfolio@terminal:~</span>
        </div>
        <div className="p-4 h-96 overflow-y-auto">
          <p className="mb-4">Welcome to my portfolio. Type a command to begin:</p>
          <p className="mb-2">about - Learn about me</p>
          <p className="mb-2">skills - View my skills</p>
          <p className="mb-2">projects - See my projects</p>
          <p className="mb-4">contact - Get in touch</p>
          <div className="flex items-center mb-2">
            <ChevronRight className="mr-2" />
            <span className="mr-2">portfolio@terminal:~$</span>
            <input
              type="text"
              className="bg-transparent border-none outline-none flex-grow"
              onKeyPress={(e) => {
                if (e.key === 'Enter') {
                  handleCommand(e.currentTarget.value);
                  e.currentTarget.value = '';
                }
              }}
            />
          </div>
          <pre className="whitespace-pre-wrap">{content}</pre>
          {showCursor && <span className="animate-pulse">▋</span>}
        </div>
      </div>
    </div>
    </>
  );
}
