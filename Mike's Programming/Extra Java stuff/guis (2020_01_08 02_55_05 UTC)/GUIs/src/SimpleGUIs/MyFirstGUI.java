package SimpleGUIs;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MyFirstGUI extends JFrame implements ActionListener{

	private JLabel label1,label2;
	private JTextField input, output;
	private JButton button1,button2;
	private JPanel panel1;
	
	public MyFirstGUI(){
		
		panel1 = new JPanel();
		
		label1 = new JLabel("Enter your name?: ");
		input = new JTextField(10);
		input.addActionListener(this);
		
		output = new JTextField(10);
		output.setEditable(false);
		
		
		label2 = new JLabel("");
		
		
		button1 = new JButton("Go!");
		button1.addActionListener(this);
		
		button2 = new JButton("Exit!");
		button2.addActionListener(this);
		
		panel1.add(label1);
		panel1.add(input);
		panel1.add(button1);
		panel1.add(button2);
		panel1.add(output);
	
		
		this.add(panel1);
	}
		
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == button2)
			System.exit(1);
		else if(e.getSource() == input){
		String s = input.getText();
		output.setText("Olleh " + s);
		}
		else if(e.getSource() == button1){
			String s = input.getText();
			output.setText("Hello " + s);
			}
		else
			System.out.println("Error.");
	}
	
	public static void main(String[] args) {
		MyFirstGUI mfg = new MyFirstGUI();
		mfg.setVisible(true);
		mfg.setSize(250, 500);
		mfg.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}




}
