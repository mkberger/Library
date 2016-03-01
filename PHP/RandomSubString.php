<html>
    <p>
    <?php
    // Use rand() to print a random number to the screen
    print rand();
    ?>
    </p>
    <p>
    <?php
    // Use your knowledge of strlen(), substr(), and rand() to
    // print a random character from your name to the screen.
    $name = "Matthew";
    $len_name = strlen($name) - 1;
    $random = rand(0, $len_name);
    $substr_name = substr($name, $random, 1);
    print $substr_name;
    ?>
    </p>
</html>
