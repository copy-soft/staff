
public interface IWisdomCharacter {
	public void wisdom();
}

public class WisdomEmpathy implements IWisdomCharacter{

        @Override
        public void wisdom() {
                System.out.println("This Wisdom innate abilities has Empathy Characteristics.");
        }

}

public class WisdomFoolish implements IWisdomCharacter{

        @Override
        public void wisdom() {
                System.out.println("This Wisdom innate abilities has Foolish Characteristics.");
        }

}
public class WisdomGoodJudgement implements IWisdomCharacter{

        @Override
        public void wisdom() {
                System.out.println("This Wisdom innate abilities has Good Judgement Characteristics.");
        }

}

public class WisdomOblivious implements IWisdomCharacter{

        @Override
        public void wisdom() {
                System.out.println("This Wisdom innate abilities has Oblivious Characteristics.");
        }

}





