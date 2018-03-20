//
//  FLMessageBubbleView.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/7.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FLMessageModel;

@interface FLMessageBubbleView : UIView

@property (nonatomic, strong) FLMessageModel *message;
@property (nonatomic, strong) UIFont *textFont UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) UIEdgeInsets textSendInsets UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) UIEdgeInsets textRecInsets UI_APPEARANCE_SELECTOR;
- (instancetype)initWithIsSender:(BOOL)isSender;
@property (nonatomic, assign) CGFloat horizontalOffset;

@end
