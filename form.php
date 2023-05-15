<!DOCTYPE html>
<html lang="fr">
    <head>
        <meta charset="utf-8">
        <title>Create account</title>
    </head>
    <body>
        <form method="post" action="">
            <label>Name :</label>
            <input type="text" name="name" required maxlength="30">
            <br><br>
            <label>Password :</label>
            <input type="password" name="passwd" required>
            <br><br>
            <label>Confirm your password</label>
            <input type="password" name="verfipass" required>
            <br><br>
            <input type="submit" name="create" value="Create your account">
        </form>
    </body>
</html>