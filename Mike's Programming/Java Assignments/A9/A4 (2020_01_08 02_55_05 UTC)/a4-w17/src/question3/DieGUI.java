//Michael Masters 0343427
//this program is designed to create a Graphic user interface that creates 
//a die with the number of sides the the user decides and then rolls the die
package question3;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class DieGUI extends JFrame{
	
	//creating gui elements to use later
	private JLabel label1,title;
	private JTextField input;
	private JTextArea output;
	private JButton button1,button2;
	private JPanel panel1,panel2,panel3,panel4;
	////////////
	
	//creating the gui
	public DieGUI(){
	
		//creating panels
		panel1 = new JPanel();
		panel2 = new JPanel();
		panel3 = new JPanel();
		panel4 = new JPanel();
		///////
		
		//setting labels buttons and setting them to the correct action listener
		label1 = new JLabel("Number of sides: ");
		input = new JTextField(4);
		
		
		output = new JTextArea(10,15);
		output.setEditable(false);
		
		button1 = new JButton("Create");
		button1.addActionListener(new Button1Handler());
		
		button2 = new JButton("Roll current die");
		button2.addActionListener(new Button2Handler());
		/////////
		
		//adding elements to panel1
		panel1.setLayout(new GridLayout(2,2));
		panel1.add(label1);
		panel1.add(input);
		panel1.add(button1);
		panel1.setOpaque(true);
		panel1.setBorder(BorderFactory.createTitledBorder("New die"));
		///////
		
		//adding elements to panel2
		panel2.add(panel1);
		panel2.add(button2);
		panel2.setBorder(BorderFactory.createTitledBorder("Die options"));
		/////
		
		//adding elements to panel3
		panel3.add(output);
		panel3.setBorder(BorderFactory.createTitledBorder("Roll history"));
		////////////
		
		//adding elements to panel4
		panel4.setLayout(new GridLayout(1,2));
		panel4.add(panel2);
		panel4.add(panel3);
		//////////////
		
		//adding panels to gui
		this.add(panel4);
	
	}
	
	//the button handler for button 1
	public class Button1Handler implements ActionListener {
		@Override
		public void actionPerformed(ActionEvent arg0) {
			//this creates the dice from the users input 
			int numSide = Integer.parseInt(input.getText());	
			Die d1 = new Die(numSide);
			output.setText("Note that creating a new die \nreplaces the current one.\n\n");
			output.append("New die: " + d1.toString() + "\n\n");
			//////////
		}
	}
	////
	
	//the button handler for button 2
	public class Button2Handler implements ActionListener {
		int rollNum = 1;
		public void actionPerformed(ActionEvent e) {
			//this creates the dice from the users input 
			int numSide = Integer.parseInt(input.getText());	
			Die d1 = new Die(numSide);
			output.append("Roll#" + rollNum + " -> value: " + d1.getSideUp() + "\n");
			rollNum++;
			//////////////
		}
	}
	///////
	
	//main class
	public static void main(String[] args) {
		//the specifics of the gui (size,visibility and close operator)
		DieGUI diegui = new DieGUI();
		diegui.setVisible(true);
		diegui.setSize(500, 250);
		diegui.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		///////
	}
//////////
}
