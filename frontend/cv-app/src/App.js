import './index.css'
import Footer from "./components/footer/index.js";
import Header from "./components/header/index.js";
import MainContent from "./components/mainContent/index.js";

function App() {
  return (
    <div>
      <Header/>
      <MainContent></MainContent>
      <Footer/>
    </div>
  );
}

export default App;
