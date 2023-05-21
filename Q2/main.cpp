
CharismaDecorator;
ClothingsDecorator;
ConstitutionDecorator;
DexterityDecorator;
IntelligenceDecorator;
StrengthDecorator;
import ca.concordia.soen6461.character.decorator.impl.WisdomDecorator;
import ca.concordia.soen6461.character.option.Charisma;
import ca.concordia.soen6461.character.option.Clothings;
import ca.concordia.soen6461.character.option.Constitution;
import ca.concordia.soen6461.character.option.Dexterity;
import ca.concordia.soen6461.character.option.Intelligence;
import ca.concordia.soen6461.character.option.Strength;
import ca.concordia.soen6461.character.option.Wisdom;
import ca.concordia.soen6461.characterclasses.ICharacter;
import ca.concordia.soen6461.characterclasses.IRanger;
import ca.concordia.soen6461.characterclasses.impl.RangerCharacter;

public class Client {
	public static void main(String[] args) {
		System.out.println("------------First Part of the Questions#2-------------");
		System.out.println("Part-1: Characters can wear various types of clothing");
		System.out.println();
		System.out.println("Questions#2_1: Characters can wear various types of clothing: boots, hats, helmets, cloaks, armour.");
		RangerCharacter ranger= new RangerCharacter(); 
		System.out.println(ranger.getClothings());
		RangerCharacter cloths = new RangerCharacter();
		for (Clothings clothes : Clothings.values()) {
		ICharacter Character = new ClothingsDecorator(cloths, clothes);
		Character.getClothings(); 
		}
		
		System.out.println();
		System.out.println("1. Creating Ranger Simple Character's Objects...");
		System.out.println();
		final IRanger rangerCharacter = new CharismaDecorator(new ConstitutionDecorator(
				new DexterityDecorator(new IntelligenceDecorator(
						new StrengthDecorator(new WisdomDecorator(new ClothingsDecorator(
				new RangerCharacter(),Clothings.armour), Wisdom.empathy),Strength.plump), Intelligence.simple), 
						Dexterity.awkward), Constitution.healthy),Charisma.leadership);
		rangerCharacter.getClothings();
		rangerCharacter.getCharisma();
		rangerCharacter.getConstitution();
		rangerCharacter.getDexterity();
		rangerCharacter.getIntelligence();
		rangerCharacter.getStrength();
		rangerCharacter.getWisdom();
		
		
		System.out.println();
		System.out.println("2. Creating Barbarian Simple Character's Objects...");
		System.out.println();
		RangerCharacter c = new RangerCharacter();
		ClothingsDecorator cd = new ClothingsDecorator(c, Clothings.armour);
		WisdomDecorator wd = new WisdomDecorator(cd, Wisdom.foolish);
		StrengthDecorator sd = new StrengthDecorator(wd, Strength.burly);
		IntelligenceDecorator id = new IntelligenceDecorator(sd, Intelligence.inquisitive);
		DexterityDecorator dd = new DexterityDecorator(id, Dexterity.sneaky);
		ConstitutionDecorator cnd = new ConstitutionDecorator(dd, Constitution.strong);
		CharismaDecorator cd1 = new CharismaDecorator(cnd, Charisma.confidence);
		
		ICharacter BarbarianCharacter = cd1;
		BarbarianCharacter.getClothings(); 
		BarbarianCharacter.getCharisma();
		BarbarianCharacter.getConstitution();
		BarbarianCharacter.getDexterity();
		BarbarianCharacter.getIntelligence();
		BarbarianCharacter.getStrength();
		BarbarianCharacter.getWisdom();
		
		System.out.println();
		System.out.println("------------Second Part of the Questions#2-------------");
		System.out.println("Questions#2_2: Ensure armours is at top of clothes (or clothing option)....");
		System.out.println(ranger.getClothings());
		for (Clothings clothes : Clothings.values()) {
		ICharacter Character = new ClothingsDecorator(c, clothes);
		Character.getClothings();
		//System.out.println(Character.getClothings()); 
		}
		
	}
}
