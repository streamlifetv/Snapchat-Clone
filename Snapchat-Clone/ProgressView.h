//
//  ProgressView.h
//  Snapchat-Clone
//
//  Created by Adam on 1/26/16.
//  Copyright © 2016 atecle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProgressView : UIView

@property (nonatomic, readonly) BOOL isDisplayed;

- (void) setIsDisplayed:(BOOL)isDisplayed;
- (void)startAnimating;
- (void)stopAnimating;

@end
