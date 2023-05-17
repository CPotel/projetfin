<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="utf-8">
        <link href="CSS/game.css" rel="stylesheet">
        <title>IDROLICO</title>
    </head>
    <script href="header.js" defer></script>
    <body>
        <header>
        <nav>
            <ul>
                <li><a class="accueil" href="index.php">HOME</a></li>
                <li><a class="score" href="score.php">SCORE</a></li>
                <li><a class="theme" href="theme.php">THEME</a> </li>
                <li><a class="login" href="login_form.php">MY ACCOUNT</a></li>
                <li><a class="who" href="who.html">ABOUT US</a></li>
            </ul>
        </nav>  
        </header>
        <main>
            <div class="game">
            <?php
                $output=NULL;
                $output=exec('Jeu.exe');
                echo $output;
            ?>
            </div>
            <div class="menu">
                <form method="post" action="">
                    <legend>Chronometer</legend>
                    <div id="nbrecoup">
                    </div>

                    <legend>Number of attempts</legend>
                    <div id="chrono">
                    </div>

                    <input type="submit" name="reset" id="reset" value="RESET"/>
                    <input type="submit" name="newgame" id="newgame" value="NEW GAME"/>
                    <input type="submit" name="solve" id="solve" value="SOLVE"/>
                </form>
            </div>
        </main>


        <footer>
        <div class="reseaux">
            <h2>Social Networks</h2>
            <ul>
                <li><a class = "insta" href="https://www.instagram.com/ferrari/?next=%2F&hl=fr" >INSTAGRAM<img id ="logo2" src="https://cdn.glitch.global/37d376e5-d19b-4c81-9ccf-ab1b2f553e00/5ca4860a5d32fb0b9e2ac5a8-instagram.png?v=1668501430681" alt="Logo_Insta"> </a></li>
                <li><a class = "youtube" href = "https://www.youtube.com/user/ferrariworld">YOUTUBE<img id="logo3" src ="https://cdn.glitch.global/37d376e5-d19b-4c81-9ccf-ab1b2f553e00/5ca487bf5d32fb0b9e2ac5ac-youtube.png?v=1669106839387" alt="Logo_Youtube"></a></li>
                <li><a class="twitter" href = "https://twitter.com/Ferrari">TWITTER<img id="logo4" src = "https://cdn.glitch.global/37d376e5-d19b-4c81-9ccf-ab1b2f553e00/5ca487595d32fb0b9e2ac5aa-twitter.png?v=1669107190949" alt="Logo_Twitter"></a></li>
            </ul>
        </div>
        <div class="contacter">
            <h2>Contact us</h2>
            <ul>
                <li><p>E-mail :  Ferrari.corp@gmail.com</p></li>
                <li><p>phone number : 0650184350</p></li>
                <li><a href="contact.html">Contact form</a></li>
            </ul>
        </div>
        <div class="legal">
            <h2>Legal Notice</h2>
            <ul>
                <li><a href="#">Terms and Conditions of Use</a></li>
                <li><a href="#">General Terms and Conditions of Sale</a></li>
                <li><a href="#">Privacy Policy</a></li>
            </ul>
        </div>
        </footer>
    </body>
</html>