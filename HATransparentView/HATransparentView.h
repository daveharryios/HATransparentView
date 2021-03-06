//
//  HATransparentView.h
//  HATransparentView
//
//  Created by Heberti Almeida on 13/09/13.
//  Copyright (c) 2013 Heberti Almeida. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HAStyle) {
    HAStyleLight = 0,
    HAStyleBlack
};

@protocol HATransparentViewDelegate <NSObject>
@optional
- (void)HATransparentViewDidClosed;
- (void)HATransparentViewDidCall;

@end

@interface HATransparentView : UIView

@property(nonatomic, assign) HAStyle style;
@property(nonatomic, assign) id<HATransparentViewDelegate> delegate;
@property(nonatomic, assign) BOOL hideCloseButton;
@property(nonatomic, assign, setter=tapBackgroundToClose:) BOOL tapBackgroundToClose;
@property(nonatomic, assign, setter=useBlur:) BOOL useBlur;
@property(nonatomic, assign, setter=blurEffectStyle:) UIBlurEffectStyle blurEffectStyle;

- (void)open;
- (void)close;

@end
