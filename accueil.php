<!DOCTYPE html>
<html lang="fr">

    <head>
        <meta charset="UTF-8">
        <link href = "CSS/home" rel="stylesheet">
        <link href = "CSS/Style_global.css" rel="stylesheet">
        <title>Home</title>
    </head>

    <body>
        <header>
        </header>

        <main>
            <h1>Welcome ! Please login to continue</h1>
            <form method="post" action="login.php">
                <label>Name :</label>
                <input type="text" name="name" required>
                <br><br>
                <label>Password :</label>
                <input type="password" name="passwd" required>
                <br><br>
                <input type="submit" name="submit" value="Log in" class="Bouton1">
            </form>
            <a href="form.php" class="Bouton1">No account? Sign in </a>
        </main>
        
        <footer>
            <div>Project by : Yesi DUDON, Esteban HALLIEZ, Anthony LEJEUNE, Sasha LE-ROUX ZIELINSKI, Robin MATARESE, Cyriaque POTEL (CIR 1)</div>
        </footer>
    </body>
</html>