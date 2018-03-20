//
//  FLChatListCell.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/14.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FLConversationModel;
@interface FLChatListCell : UITableViewCell

@property (nonatomic, strong) FLConversationModel *model;

- (void)updateUnreadCount;

@end
