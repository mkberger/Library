<html>
  <head>
    <title></title>
  </head>
  <body>
    <p>
        <?php
            class Person {
                public $isAlive = true;
                static public function say() {
                    echo "Here are my thoughts!";   
                }
            }
            
            class Blogger extends Person {
                const cats = 50;   
            }
            
            echo Blogger::say() . "<br>";
            echo Blogger::cats . "<br>";
            
            $blogger = new Blogger();
            
            if(is_a($blogger, "Person")) {
                echo "I am a person!" . "<br>";
            }
            if (property_exists($blogger, "isAlive")) {
                echo "I am alive!" . "<br>";
            }
            if (method_exists($blogger, "say")) {
                echo "And I have a voice!";
            }
        ?>
    </p>
  </body>
</html>
