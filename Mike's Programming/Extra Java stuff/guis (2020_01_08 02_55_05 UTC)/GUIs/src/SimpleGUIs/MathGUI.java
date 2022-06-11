package SimpleGUIs;
import javax.swing.*;
import java.io.*;
import java.awt.*;
import java.awt.event.*;

public class MathGUI extends JFrame {

	private JLabel label1,label2;
	private JTextField input1, input2;
	private JTextArea output;
	private JButton button1,button2;
	private JPanel panel1, controlPanel;
	private JCheckBox invert;
	
	public MathGUI(){
		
		panel1 = new JPanel();
		controlPanel = new JPanel();
		controlPanel.setLayout(new GridLayout(4,2));
		
		label1 = new JLabel("Enter a number: ");
		input1 = new JTextField(10);
		//input.addActionListener(new InputHandler());
		label2 = new JLabel("Enter a number: ");
		input2 = new JTextField(10);
		
		
		output = new JTextArea(10,30);
		output.setEditable(false);
		
		
		button1 = new JButton("Go!");
		button1.addActionListener(new GoButtonHandler());
		
		button2 = new JButton("Out to File!");
		button2.addActionListener(new FileButtonHandler());
		
		invert = new JCheckBox("Invert numbers");
		
		controlPanel.add(label1);
		controlPanel.add(label2);
		controlPanel.add(input1);
		controlPanel.add(input2);
		controlPanel.add(button1);
		controlPanel.add(button2);
		controlPanel.add(invert);
		
		panel1.add(controlPanel);
		panel1.add(new JScrollPane(output));
	
		
		this.add(panel1);
	}
		
	
	
	public class GoButtonHandler implements ActionListener {
		public void actionPerformed(ActionEvent e) {
			try{
				double num1 = Double.parseDouble(input1.getText());	
				double num2 = Double.parseDouble(input2.getText());
				
				double result = 0;
				
				if(invert.isSelected()){
					result = num2/num1;
					output.append(num2 + " / " + num1 + " = " + result + "\n");
				}
				else{
					result = num1/num2;
					output.append(num1 + " / " + num2 + " = " + result + "\n");
				}
				
				
				
			}catch(NumberFormatException f){
				output.append("Error with operands.\n");
			}
		}
	}
	
	public class FileButtonHandler implements ActionListener {
		public void actionPerformed(ActionEvent e){
				try{
				PrintWriter pOut = new PrintWriter(new File("output.txt"));
				pOut.write(output.getText());
				pOut.close();
				}catch(Exception f){
					JOptionPane p = new JOptionPane(null);
					p.showMessageDialog(null, "ERROR");
					//System.out.println("ERROR...");
				}
				output.setText("");
		}
	}
	public class InputHandler implements ActionListener {
		public void actionPerformed(ActionEvent e) {
				String s = input1.getText();
				output.append("OlleH " + s + "\n");
		}
	}
	
	
	
	
	
	
	public static void main(String[] args) {
		MathGUI mfg = new MathGUI();
		mfg.setVisible(true);
		mfg.setSize(500, 500);
		mfg.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}




}
