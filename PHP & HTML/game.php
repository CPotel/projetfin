<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="utf-8">
        <link href="game.css" rel="stylesheet">
        <title>Game</title>
    </head>
    <body>
        <h1>There's nothing to see here (as of now).</h1>
        <main>
            <?php
                $output=NULL;
                $output=exec('Jeu.exe');
                echo $output;
            ?>
        </main>

        <h1>Welcome to Idraulico</h1>
        <div class="game">Level n°</div>

        <footer>
            <div>Project by : Yesi DUDON, Esteban HALLIEZ, Anthony LEJEUNE, Sasha LE-ROUX ZIELINSKI, Robin MATARESE, Cyriaque POTEL (CIR 1)</div>
        </footer>
    </body>
</html>