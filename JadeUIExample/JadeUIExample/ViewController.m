//
//  ViewController.m
//  JadeUIExample
//
//  Created by 罗英 on 16/5/9.
//  Copyright © 2016年 罗英. All rights reserved.
//

#import "ViewController.h"

#import "UIView+JadeUI.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.jd_frame(CGRectZero).jd_text(@"hello").jd_image(nil).jd_blur(3);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
