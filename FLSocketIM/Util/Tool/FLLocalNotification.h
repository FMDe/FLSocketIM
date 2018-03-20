//
//  FLLocalNotification.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/21.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <Foundation/Foundation.h>
@class FLMessageModel;
@interface FLLocalNotification : NSObject



/**
 接收到消息发送本地推送

 @param message 消息
 */
+ (void)pushLocalNotificationWithMessage:(FLMessageModel *)message;

@end
