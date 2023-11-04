import './header.css'
function Header() {
    return (
         <div className='header__wrapper'>
            <div className='container-nav'>
                <div className='header-logo'>
                    <img src='https://d2gbo5uoddvg5.cloudfront.net/images/modules/react.gif'></img>
                </div>
                <div className='header-account'>
                    <div className='header-account__info'>
                        <p className='account__info-top'>Handicrafted by</p>
                        <p>
                            Jim HLS
                        </p>
                    </div>
                    <div className='header-account__image'>
                        <img src='https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTS_SdnrFIKzOfHTWA1OOfSMSsMRIcWFO7g-Q&usqp=CAU'></img>
                    </div>
                </div>
            </div>
        </div>
    );
}

export default Header;