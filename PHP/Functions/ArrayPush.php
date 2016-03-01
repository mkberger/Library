<html>
    <p>
		<?php
			// Create an array and push 5 elements on to it, then 
	    	// print the number of elements in your array to the screen
	    	$fav_shows = array();
	    	array_push($fav_shows, "Broad City");
	    	array_push($fav_shows, "It's Always Sunny In Philadelphia");
	    	array_push($fav_shows, "The Daily Show with Trevor Noah");
	    	array_push($fav_shows, "Louie");
	    	array_push($fav_shows, "Mad Men");
	    	$len_fav_shows = count($fav_shows);
			print $len_fav_shows;
		?>
	</p>
</html>
