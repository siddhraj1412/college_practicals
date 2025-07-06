try {
        PrintWriter fileOutput = new PrintWriter("FileOutput.txt");
        fileOutput.printf(Locale.getDefault(), "Hi, What's the day today? %s.\n", new Date());
        fileOutput.print("Here's an implementation of PrinWriter class for file writing.\n");
        fileOutput.println("Hope Code Gym made it simpler for you to understand.");
        fileOutput.append("One step at a time, and off you go!");
        fileOutput.flush();
        fileOutput.close();
        } catch (Exception e) {
        e.printStackTrace();
        }