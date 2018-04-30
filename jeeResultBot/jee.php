<?php

while(true){
    
    $url = "http://cbseresults.nic.in/";
  
	$context = stream_context_create(
	         array(
	             "http" => array(
	                 "header" => "User-Agent: Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/50.0.2661.102 Safari/537.36"
	             )
	         )
	     );

	$webpage = file_get_contents($url, false, $context);

    if(file_get_contents("data")==$webpage){
        echo "SAME" . PHP_EOL;
    }
    else{
        echo "CHECK RESULT !" . PHP_EOL;
        exec("alarm.mp3");
    }



    sleep(60);
}