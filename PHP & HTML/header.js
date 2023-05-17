let head = document.querySelector("header");

function disappear(prevPos, currPos){
    if(currPos > prevPos){
        head.setAttribute("hidden", "");
    }
    else{
        head.removeAttribute("hidden");
    }
}

let lastKnownPos = 0; scrollPos;
let ticking = false;

document.addEventListener("scroll", (event)=>{
    scrollPos = window.scrollY;
    if(!ticking){
        window.requestAnimationFrame(()=>{
            disappear(lastKnownPos, scrollPos);
            ticking = false;
        });
        ticking = true;
    }
    lastKnownPos = scrollPos;
});