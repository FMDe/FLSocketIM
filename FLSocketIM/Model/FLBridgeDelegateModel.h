//
//  FLBridgeDelegateModel.h
//  FLSocketIM
//
//  Created by FMD on 2017/7/12.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface FLBridgeDelegateModel : NSObject

@property (nonatomic, weak) id delegate;

- (instancetype)initWithDelegate:(id)delegate;

@end
