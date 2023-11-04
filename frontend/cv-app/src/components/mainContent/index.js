import React from 'react';
import './mainContent.css'
function MainContent() {
    return (
        <div className='main__wrapper'>
            <div className='content-top'>
                <p className='fsmax content-top__main'>A joke a day kepps the doctor away</p>
                <p className='fsmin'>If you joke wropng away. Yoyur teeth have to pay. (Serious)</p>
            </div>
            <div className='content-middle'>
                <p className='fsmiddle'>
                    A child asked his father, "How were people born?" So his father said, "Adam and Eve made babies, then their babies became adults and made babies, and so on."

                    The child then went to his mother, asked her the same question and she told him, "We were monkeys then we evolved to become like we are now."   

                    The child ran back to his father and said, "You lied to me!" His father replied, "No, your mom was talking about her side of the family."
                </p>
            </div>
            <hr/>
            <div className='content-button'>
                <button className='secondary-button fsmiddle'>This is funny!</button>
                <button className='primary-button fsmiddle'>This is not funny</button>
            </div>
        </div>
    );
}

export default MainContent;