//
//  FLSocketManager.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/7.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FLSocketManager : UIView

@property (nonatomic, strong) SocketIOClient *client;
+ (instancetype)shareManager;
- (void)connectWithToken:(NSString *)token success:(void(^)())success fail:(void(^)())fail;

@end
