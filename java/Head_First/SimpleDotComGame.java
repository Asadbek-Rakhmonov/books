// test class
class SimpleDotComGame {

	public static void main(String[] args) {

		SimpleDotCom dotCom = new SimpleDotCom();
		int[] location = {1,2,3};
		dotCom.setLocationCells(location);
		String result = dotCom.checkYourself("4");
		System.out.println(result);
	}
}



// real class
class SimpleDotCom {

	int[] locationCells;
	int numOfHits = 0;
	String result = "miss";

	String checkYourself(String guess) {

		int guessNumb = Integer.parseInt(guess);
		for(int i : locationCells) {
			if(i == guessNumb) {
				++numOfHits;
				result = "hit";
				break;
			} 
		}
		if(numOfHits == locationCells.length) {
			result = "kill";
		}

		return result;
	}

	void setLocationCells(int[] loc) {
		locationCells = loc;
	}
}