/*
 * First in fist out queue, withou cycle
 */
class Queue {
	int que[];
	int inPos;
	int outPos;
	boolean bIsFull;
	
	Queue(int queLngth){
		que = new int[queLngth];
		inPos = 0;
		outPos = 0;
		bIsFull = false;
	}
	
	int put(int arg) {
		if (bIsFull){
			return -1;
		}
		
		que[inPos] = arg;
		
		// Move in position to next valid position
		inPos++;
		if (inPos == que.length) {
			inPos = 0;
			if (inPos == outPos) {
				bIsFull = true;
			}
		}
		
		return 0;
	}
	
	int get() {
		int iRet = 0;
		if (inPos == outPos) {
			return -1;
		}
		else 
		{
			iRet = que[outPos];
		}
		
		// Move out position to next member
		if (outPos == (que.length - 1)) {
			outPos = 0;
		}
		else {
			outPos++;
		}
		
		return iRet;
	}
}
