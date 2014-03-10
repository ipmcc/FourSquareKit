//
//  UXRRestaurantDetailsViewController.h
//  Demo
//
//  Created by Rex St. John on 3/9/14.
//  Copyright (c) 2014 UX-RX. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FourSquareKit/FourSquarekit.h>

@interface UXRRestaurantDetailsViewController : UIViewController
@property(nonatomic,strong) IBOutlet UILabel *restaurantName;
@property(nonatomic,strong) IBOutlet UXRImageView *imageView;
@end
