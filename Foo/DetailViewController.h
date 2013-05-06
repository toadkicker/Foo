//
//  DetailViewController.h
//  Foo
//
//  Created by Todd on 5/6/13.
//  Copyright (c) 2013 GoVIP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
