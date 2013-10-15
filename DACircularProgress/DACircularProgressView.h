//
//  DACircularProgressView.h
//  DACircularProgress
//
//  Created by Daniel Amitay on 2/6/12.
//  Copyright (c) 2012 Daniel Amitay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DACircularProgressView : UIView

@property(nonatomic, strong) UIColor *trackTintColor UI_APPEARANCE_SELECTOR;
@property(nonatomic, strong) UIColor *progressTintColor UI_APPEARANCE_SELECTOR;
@property(nonatomic) NSInteger roundedCorners UI_APPEARANCE_SELECTOR; // Can not use BOOL with UI_APPEARANCE_SELECTOR :-(
@property(nonatomic) CGFloat thicknessRatio UI_APPEARANCE_SELECTOR;
@property(nonatomic) CGFloat progress;

@property(nonatomic) CGFloat indeterminateDuration UI_APPEARANCE_SELECTOR;
@property(nonatomic) NSInteger indeterminate UI_APPEARANCE_SELECTOR; // Can not use BOOL with UI_APPEARANCE_SELECTOR :-(

@property (nonatomic, assign) NSInteger marqueeAnimation;
@property (nonatomic, assign) CGFloat marqueeCurrentAngle;
@property (nonatomic, assign) CGFloat marqueeIncrementAngle;
@property (nonatomic, assign) CGFloat marqueeAnimateDuration;

- (void)setProgress:(CGFloat)progress animated:(BOOL)animated;
- (void)startMarqueeAnimation;
- (void)stopMarqueeAnimation;
@end
