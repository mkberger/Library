<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1"><!--to ensure proper rendering and touch zooming on mobile devices-->
        <title>Matthew Berger</title>
        <link rel="shortcut icon" href="https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcRW7nB7drx8E_eAciry7K2ZtslGlAEUyZCq0D9eBNWVU38b8Hiz">
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css">
        <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.0/jquery.min.js"></script>
        <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/js/bootstrap.min.js"></script>
        <style>
        p {
            font-family: "Verdana, Sans Serif";
            font-size: 20px;
            width: 740px;
            background-color:#404040;
            color:white;
            border-radius: 2em;
            margin-left:auto;
            margin-right:auto;
            horizontal-align: "center";
            align:left;
        }
        .bold_span {
            background-color:#202020;
            font-size: 24px;
            font-family:"Verdana, Sans Serif";
            width:100%;
            display: inline-block;
            text-align: center;
        }
        html {overflow-y: scroll !important;}
        </style>
    </head>
    <body onload = "displayAbout()" background = "http://www.m0ysu.com/ss3900cd.jpg" style = "background-attachment:fixed; padding-top:115px">
        <nav class="navbar navbar-fixed-top navbar-inverse" style = "background-color:202020;">
            <div style = "cursor: pointer" class="navbar-container">
                <a class="navbar-brand" id = "About_Button" onClick = "displayAbout()" style = "color: white">About</a>
                <a class="navbar-brand" id = "Projects_Button" onClick = "displayProjects()">Projects</a>
                <a class="navbar-brand" id = "Courses_Button" onClick = "displayCourses()">Courses</a>
                <a class="pull-right" target="_blank" href = "https://github.com/mkberger/Library" style = "background-color:white"><img src="http://cdn.flaticon.com/png/256/25231.png" width="50px"></a>
                <a class="pull-right" target="_blank" href = "https://www.linkedin.com/in/matthew-berger-20672367?trk=hp-identity-name"><img src="https://image.freepik.com/free-icon/linkedin-logo_318-50643.png" width="50px"></a>
            </div>
        </nav>
        <div class="About container-fluid bg-1">
            <img src="seniorpic.jpg" class="img-responsive img-circle margin" style="display:inline;" width="300" height="300">
            <p style = "height:500px; margin-top:-432px;">
                <br>
                <br>
                <span class = "bold_span">
                Welcome!
                </span>
                <br>
                <br>
                <br>
                &emsp;&emsp;&emsp;My name is Matthew Berger. <br>
                <br>
                &emsp;&emsp;&emsp;I am a music lover, TV enthusiast, computer scientist, and an all-around<br>
                &emsp;&emsp;&emsp;people person. I am passionate about defining problems, then designing, <br>
                &emsp;&emsp;&emsp;implementing, testing, and maintaining solutions. <br> 
                <br>
                &emsp;&emsp;&emsp;Click <a target="_blank" href="https://www.linkedin.com/in/matthew-berger-20672367?trk=hp-identity-name">here</a> to view my LinkedIn profile or <a target="_blank" href="https://github.com/mkberger/Library">here</a> for my GitHub repository.<br>
                <br>
                <br>
                <span class = "bold_span">
                I hope you enjoy viewing my website!
                </span>
                <br>
                <br>
            </p>
        </div>
            <p class = "Projects" style = "height:1380px;">
                <br>
                <br>
                <span class = "bold_span">
                Autism Spectrum Disorder Therapy
                </span> <br>
                <br>
                &emsp;&emsp;&emsp;Conceptualized, implemented, and analyzed an innovative technology- <br>
                &emsp;&emsp;&emsp;embedded playscape for children with ASD, with the intention of improving <br>
                &emsp;&emsp;&emsp;their sensory processing skills. Used existing technologies (Microsoft Kinect, <br>
                &emsp;&emsp;&emsp;projector, textile wall, and related SDKs) to create the game 'Balloon Pop'. <br>
                <br>
                <br>
                <span class = "bold_span">
                The Next Best Search Engine
                </span> <br>
                <br>
                &emsp;&emsp;&emsp;Built an integrated web search engine that has several features: ranking <br>
                &emsp;&emsp;&emsp;based on both tf-idf and PageRank scoring, indexing implemented with <br>
                &emsp;&emsp;&emsp;MapReduce, and an HTML/JavaScript powered interface with user-driven <br>
                &emsp;&emsp;&emsp;scoring and 'deep page summation'. <br>
                <br>
                <br>
                <span class = "bold_span">
                Query Optimization
                </span> <br>
                <br>
                &emsp;&emsp;&emsp;Used Postgres DB systems tools for analyzing query performance and <br>
                &emsp;&emsp;&emsp;optimization. Created views, built/clustered/unclustered indexes, <br>
                &emsp;&emsp;&emsp;enabled/disabled joins, denormalized tables, and retrieved data from the <br>
                &emsp;&emsp;&emsp;system catalog. <br>
                <br>
                <br>
                <span class = "bold_span">
                GifYak
                </span> <br>
                <br>
                &emsp;&emsp;&emsp;Designed a website for users to anonymously view, share, vote on and <br>
                &emsp;&emsp;&emsp;comment on gifs. <br>
                <br>
                <br>
                <span class = "bold_span">
                Market Maker
                </span> <br>
                <br>
                &emsp;&emsp;&emsp;Drove an electronic exchange market involving equities, clients, buy/sell <br>
                &emsp;&emsp;&emsp;orders, and insider traders. Design used core data structures (priority <br>
                &emsp;&emsp;&emsp;queues, hash tables, binary search trees) for optimal time / space efficiency. <br>
                <br>
                <br>
                <span class = "bold_span">
                Base Station Planning
                </span> <br>
                <br>
                &emsp;&emsp;&emsp;Given the coordinates of base stations (nodes) in a park (graph), found the <br>
                &emsp;&emsp;&emsp;best way to visit all bases. Determined which algorithm (Prims / Kruskals) or <br>
                &emsp;&emsp;&emsp;heuristic (Branch and Bound) to use in solving this problem (Traveling <br>
                &emsp;&emsp;&emsp;Salesperson) based on the nature of the input (number of nodes / edges). <br>
            </p>
            <p class = "Courses" style = "height:1000px;">
                <br>
                <br>
                <span class = "bold_span">
                Completed a Bachelor of Science in Engineering - Computer Science
                </span>
                <br>
                <span class = "bold_span">
                from the University of Michigan (Ann Arbor) in Fall 2015
                </span>
                <br>
                <br>
                <br>
                <span class = "bold_span">
                Courses Taken
                </span>
                <br>
                <br>
                <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 493 - User Interface Development <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 485 - Web Database Information Systems <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 484 - Database Management Systems <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 481 - Software Engineering <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 477 - Introduction to Algorithms <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 388 - Introduction to Computer Security <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 376 - Foundations of Computer Science	 <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 370 - Introduction to Computer Organization<br>  
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 281 - Data Structures and Algorithms <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 280 - Programming and Data Structures <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 270 - Introduction to Logic Design <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;EECS 203 - Discrete Mathematics <br>
                <br>
                <br>
                <br>
                <span class = "bold_span">
                Skills Acquired
                </span>
                <br>
                <br>
                <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;- Experience using Quartus, Matlab, SPSS, Maple, and other <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;technical computing software <br> <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;- C, C#, C++, Java, JS, Python, SQL, HTML, and Verilog design, <br>
                &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;development, and deployment<br>
            </p>
        <script>
            function displayAbout() 
            {
                hideAll();
                $("#About_Button").css('color', 'white');
                $(".About").show();
            }
            function displayProjects() 
            {
                hideAll();
                $("#Projects_Button").css('color', 'white');
                $(".Projects").show();
            }
            function displayCourses() 
            {
                hideAll();
                $("#Courses_Button").css('color', 'white');
                $(".Courses").show();
            }
            function hideAll()
            {
                $("#About_Button").css('color','gray');
                $("#Projects_Button").css('color','gray');
                $("#Courses_Button").css('color','gray');
                $(".About").hide();
                $(".Projects").hide();
                $(".Courses").hide();
            }
        </script>
        
    </body>
</html>
