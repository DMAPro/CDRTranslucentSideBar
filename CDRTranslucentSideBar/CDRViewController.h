//
//  CDRViewController.h
//  CDRTranslucentSideBar
//
//  Created by UetaMasamichi on 2014/06/02.
//  Copyright (c) 2014年 nscallop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CDRViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate>

- (IBAction)OnSideBarButtonTapped:(id)sender;
- (IBAction)OnRightSideBarButtonTapped:(id)sender;

@end
