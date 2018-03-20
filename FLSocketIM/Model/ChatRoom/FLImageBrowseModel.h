//
//  FLImageBrowseModel.h
//  FLSocketIM
//
//  Created by FMD on 10/09/2017.
//  Copyright © 2017 FMD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FLImageBrowseModel : NSObject

@property (nonatomic, copy) NSString *imageRemotePath;
@property (nonatomic, copy) NSString *thumRemotePath;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, assign) CGSize imageSize;
@property (nonatomic, assign) CGRect imageRect;
//@property (nonatomic, assign) CGRect rectInChatRoom;
@property (nonatomic, assign) NSInteger messageIndex;


- (instancetype)initWithMessage:(FLMessageModel *)message;

@end
