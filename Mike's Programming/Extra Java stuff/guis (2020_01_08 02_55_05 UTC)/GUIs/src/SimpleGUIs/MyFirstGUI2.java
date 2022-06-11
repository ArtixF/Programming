package SimpleGUIs;
import javax.swing.*;
import java.io.*;
import java.awt.*;
import java.awt.event.*;

public class MyFirstGUI2 extends JFrame {

	private JLabel label1,label2;
	private JTextField input;
	private JTextArea output;
	private JButton button1,button2;
	private JPanel panel1;
	
	public MyFirstGUI2(){
		
		panel1 = new JPanel();
		
		label1 = new JLabel("Enter your name?: ");
		input = new JTextField(10);
		input.addActionListener(new InputHandler());
		
		output = new JTextArea(10,30);
		output.setEditable(false);
		
		
		label2 = new JLabel("");
		
		
		button1 = new JButton("Go!");
		button1.addActionListener(new Button1Handler());
		
		button2 = new JButton("Out to File!");
		button2.addActionListener(new Button2Handler());
		
		panel1.add(label1);
		panel1.add(input);
		panel1.add(button1);
		panel1.add(button2);
		panel1.add(new JScrollPane(output));
	
		
		this.add(panel1);
	}
		
	
	
	public class Button1Handler implements ActionListener {
		public void actionPerformed(ActionEvent e) {
				String s = input.getText();
				output.append("Hello " + s + "\n");
				//JOptionPane p = new JOptionPane(null);
				//p.showMessageDialog(null, "YAY!!!");
				output.append("YAY!!!\n");
		}
	}
	
	public class Button2Handler implements ActionListener {
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
				String s = input.getText();
				output.append("OlleH " + s + "\n");
		}
	}
	
	
	
	
	
	
	public static void main(String[] args) {
		MyFirstGUI2 mfg = new MyFirstGUI2();
		mfg.setVisible(true);
		mfg.setSize(500, 500);
		mfg.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}




}
