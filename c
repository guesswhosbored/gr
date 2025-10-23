function dispalyGreetings(today){
        hrs = today.getHours();
        name="Anel'"
        if (hrs >= 6 && hrs <= 10)
            greet = 'Good Morning  '+name;
        else if (hrs >= 11 && hrs <= 16)
            greet = 'Good Afternoon '+name;
        else if (hrs >= 17 && hrs <= 21)
            greet = 'Good Evening  '+name;
        else if (hrs >= 22 && hrs <= 5)
            greet = 'Good Evening  '+name;
        document.getElementById('greet').innerHTML = greet;

    }
