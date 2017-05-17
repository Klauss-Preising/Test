package User;

public abstract class User {
	public abstract void CreateUser();	//should create in the data base the this user taking info from the constructor or from the class its self
	public abstract String getName();	//Gets the name of the User
	protected abstract String getDaysWithHours();	//Should only get the days of availability 
	public abstract String getHours(String Day);	//Should get the hours of a day 
	public abstract String getType();	//should determine what type of user they are which will determined what permissions they have
	
}
