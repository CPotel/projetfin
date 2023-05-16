<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="utf-8">
        <title>Create account</title>
    </head>
    <body>
        <h1>Create an account to continue.</h1>
        <form method="post" action="create.php">
            <label>Name :</label>
            <input type="text" name="name" required maxlength="30">
            <br><br>
            <label>Password :</label>
            <input type="password" name="passwd" required>
            <br><br>
            <label>Confirm your password</label>
            <input type="password" name="verifpass" required>
            <br><br>
            <input type="submit" name="create" value="Create your account">
        </form>
    </body>
</html>