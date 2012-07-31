//
//  ViewController.h
//  HelloProgram
//
//  Created by Zachary Tyler Hennessey on 7/31/12.
//  Copyright (c) 2012 Zachary Tyler Hennessey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;

@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
- (IBAction)helloButtonPressed:(UIButton *)sender;
@end
