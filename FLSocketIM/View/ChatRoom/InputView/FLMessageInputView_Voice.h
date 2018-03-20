//
//  FLMessageInputView_Voice.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/26.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLMessageInputView_Voice : UIView

@property (copy, nonatomic) void(^recordSuccessfully)(NSString*, NSTimeInterval);

@end
